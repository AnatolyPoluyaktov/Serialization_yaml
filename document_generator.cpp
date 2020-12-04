#include"document_generator.hpp"
namespace gen{
std::string gen_random_str(const int len) {

    std::string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

        std::random_device rd;
        std::mt19937 generator(rd());

        std::shuffle(str.begin(), str.end(), generator);

        return str.substr(1, len);

    }

int get_random_number()
{
    std::random_device r;
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist(1, 1000);
    int mean = uniform_dist(e1);
    return mean;

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


