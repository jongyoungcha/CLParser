#ifndef _CLCONFIGLOADER_HPP_
#define _CLCONFIGLOADER_HPP_

#include <CLCommon.hpp>


#define CONFIG_FILE_NAME "clparser.json"

using namespace std;

namespace clconfig {
    class CLConfig{
    public:
        CLConfig();
        ~CLConfig();
        inline void AddModulePath(string modname, string modpath){
            m_name_modulepath[modname]=modpath;
        }
    protected:
    private:
        map<string, string> m_name_modulepath;
    };

    class CLConfigLoader{
    public:
        CLConfigLoader();
        virtual ~CLConfigLoader();

        virtual CLConfig operator() (string path){
            m_path = path;
            LoadConfig();
        }
    protected:
        virtual int LoadConfig();
    private:
        string m_path;
    };
}


#endif
