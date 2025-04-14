#include <Eigen/Dense>
#pragma once 

struct State {
    // Position in inertial/world frame (x, y, z)
    Eigen::Vector3d position = Eigen::Vector3d::Zero();

    // Orientation as Phi, theta, psi rotation 
    Eigen::Vector3d rotation = Eigen::Vector3d::Zero();

    // Linear velocity in body frame (u, v, w)
    Eigen::Vector3d linear_velocity = Eigen::Vector3d::Zero();

    // Angular velocity in body frame (p, q, r)
    Eigen::Vector3d angular_velocity = Eigen::Vector3d::Zero();
};