#ifndef TEXT_MENU_APP_HPP
#define TEXT_MENU_APP_HPP

#include "appointments.hpp"
#include <string>

class TextMenuApp {
  Appointments &appointments;
  // Read the time slot
  // return numbers from 0 to 7 representing the time slot from 8:00 to 15:00
  int readTimeSlot();
  // Read the patient name
  // Names contains spaces and must be read in with getline()
  // Must be careful as getline may read empty string by mistake
  std::string readName() const;
 public:
  explicit TextMenuApp(Appointments &appointments);
  void run();
};

#endif  // TEXT_MENU_APP_HPP
