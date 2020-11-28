#include"document_generator.hpp"
namespace gen{
  std::string yaml_document::gen_random_str(const int len) {

        std::string tmp_s;
        static const char alphanum[] =
            "0123456789"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";

        srand( (unsigned) time(NULL) * getpid());

        tmp_s.reserve(len);

        for (int i = 0; i < len; ++i)
            tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];


        return tmp_s;

    }

int yaml_document::get_random_number()
{

    return (1 + rand() % 200);
}
 void yaml_document::gen_yaml_doc()
 {

    std::string head;
    for(int i = 0; i < this->len; ++i)
    {
        head = gen_random_str(get_random_number());
        for(int j =0; j < this->dep; ++j)
        {
            this->doc2[head].push_back(gen_random_str(get_random_number()));
        }
    }
    std::string file_name = "yaml_test" + std::to_string(this->len) +
            "x" + std::to_string(this->dep) +".yaml";
     YAML::Emitter emitter;
     emitter << this->doc2;

     printf("%s",emitter.c_str());

     this->doc1 = fy_document_build_from_string(NULL,emitter.c_str(),strlen(emitter.c_str()));

    this->file_name = file_name;
}

 void yaml_document::serialization()
 {
     FILE *file;
     std::cout<<this->file_name;
     file = fopen((this->file_name).c_str(), "wb");
     fy_emit_document_to_file(this->doc1, FYECF_DEFAULT, this->file_name.c_str());
     fclose(file);
     std::ofstream fout ("yaml_cpp"+(this->file_name));
     fout << this->doc2;
     fout.close();
 }
}


