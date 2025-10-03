#pragma once

#include "Mountain/Window.hpp"

constexpr float_t CameraZoomFactor = 1.25f;

class Camera
{
public:
    Vector2 position;

    Camera();

    void HandleInputs();
    void UpdateMatrices();

    void Zoom(Vector2 targetWindowPosition, float_t times);
    void ZoomIn(Vector2 targetWindowPosition = Mountain::Window::GetSize() * 0.5f);
    void ZoomOut(Vector2 targetWindowPosition = Mountain::Window::GetSize() * 0.5f);
    void SetZoom(float_t newZoom);

    ATTRIBUTE_NODISCARD
    Vector2 ToWorld(Vector2 screenPoint) const;
    ATTRIBUTE_NODISCARD
    Vector2 ToScreen(Vector2 worldPoint) const;

    ATTRIBUTE_NODISCARD
    float_t GetZoom() const;
    ATTRIBUTE_NODISCARD
    const Matrix& GetMatrix() const;
    ATTRIBUTE_NODISCARD
    const Matrix& GetInverseMatrix() const;

private:
    float_t m_Zoom = 1.f;

    Matrix m_Matrix = Matrix::Identity();
    Matrix m_InverseMatrix = Matrix::Identity();

    Vector2 m_DragStartMousePosition;
    Vector2 m_DragStartCameraPosition;

    Vector2 m_Size;
};
