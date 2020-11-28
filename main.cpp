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

   gen::yaml_document kek(10,10);
   kek.gen_yaml_doc();
    kek.serialization();
   return 0;
}
