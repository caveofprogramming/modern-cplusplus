import os
import sys
import subprocess

def create_project_directory(project_name):
    project_name_lower = project_name.lower()

    # Create the project directory
    os.makedirs(project_name, exist_ok=True)

    # Create main.cpp
    main_cpp_content = '''#include <iostream>
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
'''
    with open(os.path.join(project_name, "main.cpp"), "w") as f:
        f.write(main_cpp_content)

    # Create CMakeLists.txt
    cmake_content = f'''cmake_minimum_required(VERSION 3.10)
project({project_name})

add_executable({project_name_lower} main.cpp)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

'''
    with open(os.path.join(project_name, "CMakeLists.txt"), "w") as f:
        f.write(cmake_content)

    # Create the build subdirectory
    build_dir = os.path.join(project_name, "build")
    os.makedirs(build_dir, exist_ok=True)

    return build_dir

def run_cmake(build_dir):
    # Run cmake commands
    subprocess.run(["cmake", ".."], cwd=build_dir, check=True)
    subprocess.run(["cmake", "--build", "."], cwd=build_dir, check=True)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python script.py <project_name>")
        sys.exit(1)

    project_name = sys.argv[1]
    build_dir = create_project_directory(project_name)
    run_cmake(build_dir)

