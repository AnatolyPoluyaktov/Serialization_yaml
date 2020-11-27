#include "serialization_deserialization.hpp"
namespace serial
{
    void serialization(YAML::Node &document, std::string filename)
    {
        std::ofstream fout (filename);
        fout << document;
    }

    YAML::Node deserialization(std::string filename)
    {
        YAML::Node document = YAML::LoadFile(filename);
        return document;
    }

    void fy_serialization(struct fy_document* document, std::string filename)
    {    FILE* file;
         file = fopen(filename.c_str(), "w");
         fy_emit_document_to_fp(document, FYECF_DEFAULT, file);
         fclose(file);
    }
    struct fy_document* fy_deserialization(std::string filename)
    {

    }
}
