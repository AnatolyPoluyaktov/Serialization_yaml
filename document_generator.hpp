#ifndef DOCUMENT_GENERATOR_HPP
#define DOCUMENT_GENERATOR_HPP
#include<cstdint>
#include<string>
#include <ctime>
#include <unistd.h>
#include <stdlib.h>
#include "yaml-cpp/yaml.h"
#include <fstream>
#include "libfyaml.h"
#include <sstream>
#include <iostream>
namespace gen
{
   class yaml_document{
       public:
       yaml_document(int init_len, int init_dep)
       {
           this->len = init_len;
           this->dep = init_dep;
       }
     std::string gen_random_str(const int len);
     int get_random_number();
     void  gen_yaml_doc();

     void serialization();
     //void deserialization();

     //void fy_serialization();
     //void fy_deserialization();

   private:
       struct fy_document* doc1;
       YAML::Node doc2;
       std::string file_name;
       std::string buf;
       int len;
       int dep;
   };

// std::string gen_random_str(const int len);
// int get_random_number();
// void gen_yaml_file(int len, int dep);
}
#endif // DOCUMENT_GENERATOR_HPP
