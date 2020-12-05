#include "serialization_deserialization.hpp"
#include <istream>
namespace serial
{
    void serialization( const YAML::Node &document, const std::string filename)
    {
        std::ofstream fout (filename);
        fout << document;
    }

    YAML::Node deserialization( const std::string filename)
    {
        YAML::Node document = YAML::LoadFile(filename);
        return document;
    }

    void fy_serialization(struct fy_document* document, const std::string filename)
    {    FILE* file;
         file = fopen(filename.c_str(), "w");
         fy_emit_document_to_fp(document, FYECF_DEFAULT, file);
         fclose(file);
    }
    struct fy_document* fy_deserialization(const std::string filename)
    {
        return fy_document_build_from_file(NULL, filename.c_str());
    }
    void libyaml_serialization(yaml_document_t* document,std::string filename)
    {
        FILE* file;
        yaml_emitter_t emitter;
        yaml_emitter_initialize(&emitter);
        file = fopen(filename.c_str(), "w");
        printf("kek");
        yaml_emitter_set_output_file(&emitter, file);
        yaml_emitter_dump(&emitter,document);
        yaml_emitter_close(&emitter);
        yaml_emitter_delete(&emitter);
        yaml_document_delete(document);

    }
    yaml_document_t libyaml_deserialization(std::string filename)
       {

               FILE *file;
               yaml_parser_t parser;
               yaml_event_t event;
               int done = 0;
               int count = 0;
               file = fopen(filename.c_str(), "rb");
               yaml_parser_initialize(&parser);
               yaml_parser_set_input_file(&parser, file);
               yaml_document_t document;
               yaml_parser_load(&parser, &document);

               while (!done) {
                   if (!yaml_parser_parse(&parser, &event)) {
                       break;
                   }

                   done = (event.type == YAML_STREAM_END_EVENT);
                   yaml_event_delete(&event);
                   count++;
               }


               yaml_parser_delete(&parser);
               fclose(file);
               return document;
           }
    }
