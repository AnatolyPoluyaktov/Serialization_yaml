#ifndef SERIALIZATION_DESERIALIZATION_HPP
#define SERIALIZATION_DESERIALIZATION_HPP
#include "libfyaml.h"
#include "yaml-cpp/yaml.h"
#include <benchmark/benchmark.h>
#include <string>
#include <fstream>
#include <stdio.h>
#include "yaml.h"
namespace serial {

void serialization(YAML::Node &document, const std::string filename);
YAML::Node deserialization(const std::string filename);

void fy_serialization(struct fy_document* document, const std::string filename);
struct fy_document* fy_deserialization(std::string filename);

void libyaml_serialization(yaml_document_t* document, const std::string filename);
yaml_document_t libyaml_deserialization(const std::string filename);

}
#endif // SERIALIZATION_DESERIALIZATION_HPP
