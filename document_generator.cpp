#include"document_generator.hpp"
namespace gen{
std::string gen_random_str(const int len) {

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

int get_random_number()
{

    return (1 + rand() % 200);
}
 void gen_yaml_file(int len, int dep)
 {
    YAML::Node doc;
    std::string head;
    for(int i = 0; i < len; ++i)
    {
        head = gen_random_str(get_random_number());
        for(int j =0; j < dep; ++j)
        {
            doc[head].push_back(gen_random_str(get_random_number()));
        }
    }
    std::string file_name = "yaml_test" + std::to_string(len) +
            "x" + std::to_string(dep) +".yaml";
    std::ofstream fout(file_name);
    fout << doc;
    fout.close();
}

}


