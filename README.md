# python_cpp_binder

# Author: Adrian Tarba
# Email: adrian.tarba@gmail.com

# you need to install VisualStudio 2015/2017/2019 or any others...


# Create application template for future projects.
# Step 0: Create a project root folder.
# Step 1: In the root folder create 2 more folders: externals and source
# Step 2: Download the latest release of "pybind11" from https://github.com/pybind/pybind11 or just unzip from archive in the root folder-->externals-->"pybind11".
# Step 3: In root-->source, create 2 more folders: app and modules
# Step 4: In root-->source-->app create "app.cpp" also in root-->source-->module create "module.cpp"
# Step 5: In root folder, create a CMakeLists.txt 
# Step 6: In root folder, create a folder named 'vsstudio' which contain a batch file (for compiling a VisualStudio project). After that, run the bat script and you will see the VS project

# Step 7: Open the project solution using a VisualStudio 2015/2017/2019..., run in Release mode and you will see in root-->vsstudio-->Release a file named "pybind11module.lib"
# Step 8: Import this lib in python scripts 
# Step 9: Use that lib file in yput python script like that:
	import pybind11module
	pybind11module.say_hello()
	data = pybind111module.Data(x=5,y=10)
	data.print()
	data.x=10
	print(data.x)

