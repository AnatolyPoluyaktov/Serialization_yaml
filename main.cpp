#include "yaml-cpp/yaml.h"
#include <iostream>
#include "libfyaml.h"
#include "yaml.h"
#include <fstream>
#include <benchmark/benchmark.h>
#include "document_generator.hpp"
#include "libfyaml/config.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
//static void BM_StringCreation(benchmark::State& state) {
//  for (auto _ : state)
//    std::string empty_string;
//}
//// Register the function as a benchmark
//BENCHMARK(BM_StringCreation);
//BENCHMARK_MAIN();


int main()
{

   yaml_parser_t parser;
   yaml_event_t event;
   yaml_parser_initialize(&parser);

   YAML::Emitter out;
   //out << "Hello, World!";

   //std::cout << "Here's the output YAML:\n" << out.c_str(); // prints "Hello, World!"
   //printf("%s\n", fy_library_version());

   //YAML::Node doc =YAML::LoadFile("test.yaml");
    gen::gen_yaml_file(100,100);

   return 0;
}
