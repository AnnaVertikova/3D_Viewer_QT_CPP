#include "controller.h"

namespace s21 {
void Controller::RotationX(double angle_x) {
  model_.GetMVPMatrix().SetAngleX(angle_x);
  model_.GetMVPMatrix().RotationX();
}

void Controller::RotationY(double angle_y) {
  model_.GetMVPMatrix().SetAngleY(angle_y);
  model_.GetMVPMatrix().RotationY();
}

void Controller::RotationZ(double angle_z) {
  model_.GetMVPMatrix().SetAngleZ(angle_z);
  model_.GetMVPMatrix().RotationZ();
}

void Controller::TranslationX(double step_x) {
  model_.GetMVPMatrix().SetTranslationX(step_x);
  model_.GetMVPMatrix().TranslationX();
}

void Controller::TranslationY(double step_y) {
  model_.GetMVPMatrix().SetTranslationY(step_y);
  model_.GetMVPMatrix().TranslationY();
}

void Controller::TranslationZ(double step_z) {
  model_.GetMVPMatrix().SetTranslationZ(step_z);
  model_.GetMVPMatrix().TranslationZ();
}

void Controller::Scale(double scale) {
  model_.GetMVPMatrix().SetScale(scale);
  model_.GetMVPMatrix().Scale();
}
}  // namespace s21
