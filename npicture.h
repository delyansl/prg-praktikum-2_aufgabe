#ifndef NPICTURE_H
#define NPICTURE_H

#include <string>
#include <iostream>
#include <vector>

class NPicture
{
public:
    NPicture(int height, std::string input);
    ~NPicture();

    int get_width() const;
    int get_height() const;
    std::vector<std::vector<int>> get_pixels() const;
    int get_pixel_at(int x, int y);
    void show_picture();

private:
    int width;
    int height;
    std::vector<std::vector<int>> pixels;
};

#endif
