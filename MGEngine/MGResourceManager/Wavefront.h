#ifndef MGResourceManager_Wavefront
#define MGResourceManager_Wavefront

#include <string>

#include "Resource.h"
namespace MGResourceManager
{
   class MGRM_DllExport Wavefront : public Resource
   {
   public:
      Wavefront(std::string path);

      void Load() override;
      void Unload() override;
      bool IsValid() const override;
   };
}

#endif