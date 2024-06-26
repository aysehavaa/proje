#ifndef SLICER_H
#define SLICER_H

#include <vector>
#include <string>

class Model {
public:
    Model(const std::string& filePath);
    void rotate(float x, float y, float z);
    void move(float x, float y, float z);
    void scale(float factor);
    void addSupport();
    void cutHoles(int numberOfHoles);
    // Diğer modelle ilgili işlevler

private:
    std::vector<float> vertices;
    std::vector<int> faces;
    // Model verilerini saklamak için gerekli değişkenler
};

class BuildPlate {
public:
    BuildPlate(float width, float depth, float height);
    void addModel(const Model& model);
    void removeModel(const Model& model);
    void moveModel(const Model& model, float x, float y, float z);
    void previewLayers(int layerNumber);
    void arrangeModels(float spacing);

private:
    float width, depth, height;
    std::vector<Model> models;
    // Build plate ile ilgili verileri saklamak için gerekli değişkenler
};

class Slicer {
public:
    Slicer();
    void loadModel(const std::string& filePath);
    void sliceModel();
    void previewSlices();
    void generateSupports();
    void saveSlices(const std::string& outputPath);

private:
    BuildPlate buildPlate;
    Model currentModel;
    // Dilimleme ile ilgili verileri saklamak için gerekli değişkenler
};

#endif
