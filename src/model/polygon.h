#ifndef SRC_MODEL_POLYGON_H_
#define SRC_MODEL_POLYGON_H_

#include <vector>

namespace s21 {
class Model;
class Polygon {
  friend class Model;

 public:
  using vertices = std::vector<float>;
  vertices &GetVertices() { return vertices_united_; }

 private:
  vertices vertices_united_;
};
}  // namespace s21

#endif  //  SRC_MODEL_POLYGON_H_
