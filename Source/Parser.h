#pragma once
#include <string>
#include <map>
#include <vector>
#include <any>
#include <memory>
#include "Token.h"

namespace ParadoxLanguage {

    class Object {
        private:
            struct ObjectData {
                std::map<std::string, std::vector<std::any>> map;
            };

            std::shared_ptr<ObjectData> data;

            void Parse(const std::vector<Token>& tokens, std::vector<Token>::const_iterator& begin);

            Object(const std::vector<Token>& tokens, std::vector<Token>::const_iterator& begin);
        public:
            Object(std::string code);

            std::vector<std::string> Keys() const;

            std::vector<std::any>& AllAt(std::string key);

            const std::vector<std::any>& AllAt(std::string key) const;

            std::any& At(std::string key);

            const std::any& At(std::string key) const;
    };

    class Array {
        private:
        public:
            std::vector<std::any>& Values();
            
            const std::vector<std::any>& Values() const;
    };

}