#pragma once

struct Item {
    enum Items {
        WEAPON_PISTOL
    };

    bool AddItem(const char* name);
    bool CheckItem(const char* name);
};