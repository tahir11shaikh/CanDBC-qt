# CanDBC-qt 🚗
**A High-Performance, Plug & Play CAN DBC Parser for Qt/C++**

`CanDBC-qt` is a lightweight static library designed to bridge the gap between raw CAN bus data and physical signal values. It parses standard `.dbc` files and provides real-time decoding for embedded Qt applications.

## 🚀 Key Features
* **Qt Native:** Built on `QString`, `QByteArray`, and `QList` for seamless integration.
* **Zero Dependencies:** No external third-party parsing tools required.
* **ABI Stable:** Uses Pimpl idiom to ensure library updates don't break your build.
* **Real-Time Ready:** Optimized for high-frequency decoding loops.

## 📦 Installation & Integration
This library is distributed as a static binary (`.a`) and a single header (`.h`).

### Step 1: Add files to your project
Copy `CanDBC.h` and `libCanDBC.a` (or `.lib` on Windows) to your project folder (e.g., inside a `/libs` directory).

### Step 2: Configure .pro (qmake)
Add the library to your `.pro` file:

# Include the header path
INCLUDEPATH += $$PWD/libs

# Link the static library
LIBS += -L$$PWD/libs -lCanDBC

### Step 3: CMake
add_library(CanDBC STATIC IMPORTED)
set_target_properties(CanDBC PROPERTIES IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/libs/libCanDBC.a")
target_link_libraries(YourApp PRIVATE CanDBC)

## 📜 License & Support
This library is currently closed-source but free for evaluation. Please contact me for .a / .lib build generation.
Author: Tahir Shaikh
Contact: tahir11shaikh@gmail.com
LinkedIn: https://www.linkedin.com/in/tahir-shaikh-70083845/

Developed with ❤️ for the Automotive Community.