#ifndef MGResourceManager_ResourceManager
#define MGResourceManager_ResourceManager

#include <string>
#include <unordered_map>
#include "Resource.h"

namespace MGResourceManager
{
   class MGRM_DllExport ResourceManager
   {
      public:
         ResourceManager();
         ~ResourceManager() = default;
         void LoadResources(std::string path);
         ResourcePtr GetResource(const char* name);

      private:
         ResourcePtr LoadFile(const char* path);
         void LoadDirectory(const char* path);
         std::unordered_map<std::string, ResourcePtr> m_resources;

   };
}

#endif