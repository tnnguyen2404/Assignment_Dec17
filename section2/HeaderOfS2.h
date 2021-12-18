#include <iostream>

using std::cout;
using std::endl;
using std::string;

class metaData {
private:
    string fileName, imageType, authorName, apertureSize;
    int day, month, year, iso;
    double size, width, height, exposureTime;
    bool flash;
public:

    string getFileName() {
        return fileName;
    }

    void setFileName(string name) {
        fileName = name;
    }

    string getImageType() {
        return imageType;
    }

    void setImageType(string type) {
        if (type == "PNG" || type == "GIF" || type == "JPEG") {
            imageType = type;
        }
        else {
            cout << type << ": Image Type Not Supported" << endl;
        }
    }

    string getAuthorName() {
        return authorName;
    }

    void setAuthorName(string name) {
        authorName = name;
    }

    string getApertureSize() {
        return apertureSize;
    }

    void setApertureSize(string size) {
        if (size.size() > 2 && size.at(0) == 'f' && size.at(1) == '/') {
            apertureSize = size;
        }
        else {
            cout << "Invalid Aperture Size Format" << endl;
        }
    }

    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear() {
        return year;
    }

    void setDate(int mm, int dd, int yy) {
        if (dd > 0 && dd < 32 && mm > 0 && mm < 13 && yy > 0) {
            day = dd; month = mm; year = yy;
        }
        else {
            cout << "Invalid Date" << endl;
        }
    }

    int getIso() {
        return iso;
    }

    void setIso(int ISO) {
        iso = ISO;
    }

    double getSize() {
        return size;
    }

    void setSize(double s) {
        if (s >= 0) {
            size = s;
        }
        else {
            cout << "Invalid Size" << endl;
        }
    }

    double getWidth() {
        return width;
    }

    double getHeight() {
        return height;
    }

    void setDimensions(double w, double h) {
        if (w >= 0 && h >= 0) {
            width = w; height = h;
        }
        else {
            cout << "Invalid Dimensions" << endl;
        }
    }

    double getExposureTime() {
        return exposureTime;
    }

    void setExposureTime(double time) {
        if (time >= 0) {
            exposureTime = time;
        }
        else {
            cout << "Invalid ExposureTime Format" << endl;
        }
    }

    bool isFlashEnabled() {
        return flash;
    }

    void setFlash(bool enabled) {
        flash = enabled;
    }
};
