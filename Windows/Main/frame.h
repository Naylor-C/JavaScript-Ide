#ifndef GTKMM_FRAME_H
#define GTKMM_FRAME_H

#include <gtkmm.h>

class Frame : public Gtk::Window
{
public:
  Frame();
  ~Frame() override;

protected:
  //Signal handlers:
  void on_button_file_clicked();
  void on_button_folder_clicked();

  void on_file_dialog_finish(const Glib::RefPtr<Gio::AsyncResult>& result,
    const Glib::RefPtr<Gtk::FileDialog>& dialog);

  void on_folder_dialog_finish(const Glib::RefPtr<Gio::AsyncResult>& result,
    const Glib::RefPtr<Gtk::FileDialog>& dialog);

  //Child widgets:
  Gtk::Box m_ButtonBox;
  Gtk::Button m_Button_File;
  Gtk::Button m_Button_Folder;
};

#endif 
