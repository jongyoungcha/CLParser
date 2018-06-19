#include <CLConfigLoader.hpp>

using namespace std;
using namespace clconfig;


int CLConfigLoader::LoadConfig()
{
    if (this->m_path.empty())
    {
        cerr << "The config file path was not initailized...\n" << endl;
        abort();
    }
    
}
