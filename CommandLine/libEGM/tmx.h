#ifndef EGM_TMX_H
#define EGM_TMX_H

#include "file-format.h"

namespace egm {

class TMXFileFormat : public FileFormat {
public:
  TMXFileFormat(const EventData* event_data) : FileFormat(event_data) {}
  virtual std::unique_ptr<Project> LoadProject(const fs::path& fPath) const override;
};

} // namespace egm

#endif
