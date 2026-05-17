CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude
SRC      = src/Enums.cpp src/Task.cpp src/Project.cpp src/User.cpp \
           src/UserTypes.cpp src/Notification.cpp src/TaskFilter.cpp src/main.cpp
TARGET   = task_manager

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
