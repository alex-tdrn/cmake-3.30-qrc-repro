#include <QFile>
#include <iostream>

void print_file(const QString &url) {
  QFile file(url);
  file.open(QIODevice::ReadOnly | QIODevice::Text);
  std::cout << file.readAll().toStdString();
}

int main(int argc, char **argv) {
  print_file(":/hello_world_1.txt");
  print_file(":/hello_world_2.txt");

  return 0;
}
