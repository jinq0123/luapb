
#ifndef PROTOIMPORTER_H_
#define PROTOIMPORTER_H_

#include <string>

#include <google/protobuf/dynamic_message.h>
#include <google/protobuf/compiler/importer.h>

class ProtoImporter 
{
public:
    static ProtoImporter& instance()
    {
        static ProtoImporter T;
        return T;
    }
protected:
	ProtoImporter();
public:
	bool Import(const std::string& filename);
	google::protobuf::Message* createDynamicMessage(const std::string& typeName);
    int getEnumValue(const char * enumtype, const char * enumfield);
public:
	google::protobuf::compiler::Importer importer;
	google::protobuf::DynamicMessageFactory factory;
};


#endif
