SRC := src/
OBJ := obj/
CPP_FILES := $(wildcard $(SRC)*.cpp)
OBJ_FILES := $(addprefix $(OBJ),$(notdir $(CPP_FILES:.cpp=.o)))

CC=g++

CFLAGS=-Wall -c -I/usr/local/include/opencv -I/usr/local/include -g -std=c++11 -DQT_SHARED -I/usr/include/qt4 -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtOpenGL
LIBS= -L/usr/local/lib -lopencv_stitching -lopencv_superres -lopencv_videostab -lopencv_aruco -lopencv_bgsegm -lopencv_bioinspired -lopencv_ccalib -lopencv_dnn -lopencv_dpm -lopencv_fuzzy -lopencv_line_descriptor -lopencv_optflow -lopencv_plot -lopencv_reg -lopencv_saliency -lopencv_stereo -lopencv_structured_light -lopencv_rgbd -lopencv_surface_matching -lopencv_tracking -lopencv_datasets -lopencv_text -lopencv_face -lopencv_xfeatures2d -lopencv_shape -lopencv_video -lopencv_ximgproc -lopencv_calib3d -lopencv_features2d -lopencv_flann -lopencv_xobjdetect -lopencv_objdetect -lopencv_ml -lopencv_xphoto -lopencv_highgui -lopencv_videoio -lopencv_imgcodecs -lopencv_photo -lopencv_imgproc -lopencv_core -lQtGui -lQtCore -lQtOpenGL 
EXECUTABLE = visao

all: $(CPP_FILES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJ_FILES)	
	@$(CC) $(OBJ_FILES) -o $@ $(LIBS)
	@echo "Fim da compilacao de "$(EXECUTABLE)

$(OBJ)%.o: $(SRC)%.cpp
	@echo "Compilando "$<
	@mkdir -p obj
	@$(CC) $(CFLAGS) $< -o $@

clean:	
	@rm -rf $(OBJ) $(EXECUTABLE)
	@echo "Limpo!"

rebuild: clean all