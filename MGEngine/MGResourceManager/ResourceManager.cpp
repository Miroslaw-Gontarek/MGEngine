#include "ResourceManager.h"

namespace MGResourceManager {
   ResourceManager::ResourceManager()
   {

   }

   void ResourceManager::LoadResources(std::string path)
   {
   }

   ResourcePtr ResourceManager::GetResource(const char* name)
   {
      const auto result = m_resources.find(name);
      if(result == m_resources.cend())
      {
         return nullptr;
      }
      return result->second;
   }

   ResourcePtr ResourceManager::LoadFile(const char* path)
   {
      return nullptr;
   }

   void ResourceManager::LoadDirectory(const char* path)
   {

   }
}