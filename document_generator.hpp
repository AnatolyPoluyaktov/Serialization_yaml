#ifndef DOCUMENT_GENERATOR_HPP
#define DOCUMENT_GENERATOR_HPP
#include<cstdint>
namespace gen
{
    class document_generator
    {
    public:

        document_generator()
        {
            depth = 5;
            nodes_num =5;
        }
        document_generator(uint32_t depth_init, uint32_t nodes_num_init):
            depth(depth_init),nodes_num(nodes_num_init){}
        uint32_t Getdepth(){
            return depth;
        }

    private:
        uint32_t depth;
        uint32_t nodes_num;
    };
}
#endif // DOCUMENT_GENERATOR_HPP
