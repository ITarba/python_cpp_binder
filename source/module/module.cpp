#include <pybind11/pybind11.h>
#include <stdio.h>

"""
Write here the code for the python module

Here you have an example of such a code...
"""

void say_hello()
{
	printf("Hello World\n From C++ module\n");
}

struct MyData
{
	float x, y;
	
	MyData() : x(0), y(0) 
	{}

	MyData(float x, float y) : x(x), y(y) 
	{}
	
	void print()
	{
		printf("%f, %f\n", x, y);
	}
};

PYBIND11_MODULE(pybind11module, module)
{
    //define the module name
	module.doc() = "Pybind11Module";

	//define the function call
	module.def("say_hello", &say_hello);

	//define de functionalities(interface call names) of that class in the python
	pybind11::class_<MyData>(module, "MyData")
		.def(pybind11::init<>())
		.def(pybind11::init<float, float>(), "constructor 2", pybind11::arg("x"), pybind11::arg("y"))
		.def("print", &MyData::print)
		.def_readwrite("x", &MyData::x)
		.def_readwrite("y", &MyData::y)
	;
}