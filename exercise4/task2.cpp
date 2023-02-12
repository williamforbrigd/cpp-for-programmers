#include <gtkmm.h>

class Window : public Gtk::Window {
public:
  Gtk::VBox vbox;
  Gtk::Button button;
  Gtk::Label first_name_label;
  Gtk::Label last_name_label;
  Gtk::Label result_label;
  Gtk::Entry first_name_entry;
  Gtk::Entry last_name_entry;

  Window() {
    set_title("Øving 4");
    set_size_request(400);
    button.set_label("Combine names");
    first_name_label.set_label("First name");
    last_name_label.set_label("Last name");

    vbox.pack_start(first_name_label);
    vbox.pack_start(first_name_entry);
    vbox.pack_start(last_name_label);
    vbox.pack_start(last_name_entry);
    vbox.pack_start(button);
    vbox.pack_start(result_label);

    add(vbox);  // Add vbox to window
    show_all(); // Show all widgets

    button.set_sensitive(false); // initially set the button to disabled

    first_name_entry.signal_changed().connect([this]() {
      if (first_name_entry.get_text() != "" && last_name_entry.get_text() != "") {
        button.set_sensitive(true);
      } else {
        button.set_sensitive(false);
      }
    });

    last_name_entry.signal_changed().connect([this]() {
      if (first_name_entry.get_text() != "" && last_name_entry.get_text() != "") {
        button.set_sensitive(true);
      } else {
        button.set_sensitive(false);
      }
    });

    button.signal_clicked().connect([this]() {
      result_label.set_text("Names combined: " + first_name_entry.get_text() + " " + last_name_entry.get_text());
    });
  }
};

int main() {
  Gtk::Main gtk_main;
  Window window;
  gtk_main.run(window);
}
