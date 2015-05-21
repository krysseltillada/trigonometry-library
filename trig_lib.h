#define TRI_LIB_H
#ifdef TRI_LIB_H
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <sstream>

namespace tri {
    const double PI = 3.14;

    double get_rad(double r) {
        std::ostringstream strs;
        strs << r;
        std::string s = strs.str();
        auto i = 0u;
        while(i != s.size()) {
            if(s[i] == '.') {
                return atof(s.c_str());
            }
            else {
                i++;
            }
        }
        return 0.0;
    }

    double deg_to_rad(int d) {
        auto rad = 0.0;
        rad = d * (PI / 180);
        return rad;
    }

    int rad_to_deg(double r) {
        auto degrees = 0;
        degrees = r * 180 / PI;
        return degrees;
    }

    int get_degree(double t_s) {
        std::ostringstream strs2;
        strs2 << t_s;
        std::string s1 = strs2.str();
        auto i = 0u;
        while(i != s1.size()) {
            if(s1[i] == '.') {
                return 0;
            }
            i++;
        }
        return atoi(s1.c_str());
    }

    int ref_angle(int r_a) {
        auto ref_angle_ = 0, excd_ref_angle_ = 0, temp_ref_angle_1 = 0;

        while(true) {
        if(r_a > 0){
        if(r_a <= 90) {
           ref_angle_ = r_a;
           return ref_angle_;
        }
        else if(r_a <= 180) {
            ref_angle_ = 180 - r_a;
            return ref_angle_;
        }
        else if(r_a <= 270) {
            ref_angle_ = r_a - 180;
            return ref_angle_;
        }
        else if(r_a <= 360) {
            ref_angle_ = 360 - r_a;
            return ref_angle_;
        } else {
            excd_ref_angle_ = r_a;
            temp_ref_angle_1 = 360;
            r_a = excd_ref_angle_ - temp_ref_angle_1;

        }
        }
        else {
            if(r_a >= -90) {
            std::cout << "hit1: "<< std::endl;
           ref_angle_ = r_a  * - 1;
           return ref_angle_;
        }
        else if(r_a >= -180) {
            ref_angle_ = r_a + 180;
            return ref_angle_;
        }
        else if(r_a >= -270) {
            ref_angle_ = 180 + r_a;
            return ref_angle_ * - 1;
        }
        else if(r_a >= -360) {
            ref_angle_ = r_a + 360;
            return ref_angle_;
        } else {
            excd_ref_angle_ = r_a;
            temp_ref_angle_1 = -360;
            r_a = excd_ref_angle_ - temp_ref_angle_1;

        }
        }
        }
    }
}

#endif
