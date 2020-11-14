#include "yaml-cpp/yaml.h"
#include <iostream>
#include "libfyaml.h"
int main()
{
   YAML::Emitter out;
   out << "Hello, World!";

   std::cout << "Here's the output YAML:\n" << out.c_str(); // prints "Hello, World!"
   printf("%s\n", fy_library_version());
   return 0;
}
