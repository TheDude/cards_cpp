from conan import ConanFile
from conan.tools.cmake import CMake, CMakeToolchain, CMakeDeps, cmake_layout

class Deck(ConanFile):
    options = {"unit_tests": [True, False]}
    default_options = {"unit_tests": False}
    settings = "os", "compiler", "build_type", "arch"

    # in a real project, you would probably have real dependencies
    # this method is just here to document where those would go
    def requirements(self):
        pass

    def build_requirements(self):
        # self.test_requires is for testing only requirements (e.g. gtest)
        # use self.requires for normal dependencies.
        if self.options.unit_tests:
            self.test_requires("gtest/1.15.0")

    def layout(self):
        cmake_layout(self)

    def generate(self):
        tc = CMakeToolchain(self)
        tc.variables["BUILD_TESTING"] = self.options.unit_tests
        tc.generate()
        deps = CMakeDeps(self)
        deps.generate()

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
        if self.options.unit_tests:
            cmake.test()