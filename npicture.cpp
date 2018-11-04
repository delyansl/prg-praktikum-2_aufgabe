#include "npicture.h"

NPicture::NPicture(int height, std::string input)
{
    // Get the width and height of the picture
    width = input.length() / height;
    this->height = height;

    // Read all the data of the picture
    std::vector<int> v;
    pixels.push_back(v);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            pixels[i].push_back(input[j] - '0');
        }

        std::vector<int> new_vector;
        pixels.push_back(new_vector);
    }
}

NPicture::~NPicture()
{
}

int NPicture::get_width() const
{
    return width;
}

int NPicture::get_height() const
{
    return height;
}

std::vector<std::vector<int>> NPicture::get_pixels() const
{
    return pixels;
}

void NPicture::show_picture()
{
    for (size_t i = 0; i < pixels.size(); i++)
    {
        for (size_t j = 0; j < pixels[i].size(); j++)
        {
            std::cout << pixels[i][j];
        }
        std::cout << '\n';
    }
}

int NPicture::get_pixel_at(int x, int y)
{
    return pixels[x][y];
}
