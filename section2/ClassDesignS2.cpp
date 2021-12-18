#include "HeaderOfS2.h"


void print(metaData imageMetaData) {
    cout << "Printing the image metadata" << endl;
    cout << "File Name: " << imageMetaData.getFileName() << endl;
    cout << "Image Type: " << imageMetaData.getImageType() << endl;
    cout << "Date Created: " << imageMetaData.getMonth() << "/" << imageMetaData.getDay() << "/" << imageMetaData.getYear() << endl;
    cout << "Image Size: " << imageMetaData.getSize() << endl;
    cout << "Author Name: " << imageMetaData.getAuthorName() << endl;
    cout << "Image Dimensions: " << imageMetaData.getWidth() << "x" << imageMetaData.getHeight() << endl;
    cout << "Aperture Size: " << imageMetaData.getApertureSize() << endl;
    cout << "Exposure Time: " << imageMetaData.getExposureTime() << endl;
    cout << "ISO value: " << imageMetaData.getIso() << endl;
    cout << "Flash enabled? " << imageMetaData.isFlashEnabled() << endl;
}

int main()
{
    metaData imageMetaData;
    imageMetaData.setFileName("newFile");
    imageMetaData.setImageType("GIF");
    imageMetaData.setDate(12, 17, 2021);
    imageMetaData.setSize(20);
    imageMetaData.setAuthorName("Le Phan");
    imageMetaData.setDimensions(300, 500);
    imageMetaData.setApertureSize("f/22");
    imageMetaData.setExposureTime(1 / 30);
    imageMetaData.setIso(3000);
    imageMetaData.setFlash(true);
    print(imageMetaData);
    return 0;
}

