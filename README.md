#### WIP
## ofxStruct
> create and parse binary structure aka Pack and Unpack like Python

before include the addon to the project
make this git command to exclude some folder from the original repository index
https://github.com/svperbeast/struct.git

    git update-index --assume-unchanged $FILE
    git update-index --assume-unchanged [your_[of]_installation_path]/addons/ofxStructDev/libs/struct/build/
    git update-index --assume-unchanged [your_[of]_installation_path]/addons/ofxStructDev/libs/struct/gtest-1.6.0/
    git update-index --assume-unchanged [your_[of]_installation_path]/addons/ofxStructDev/libs/struct/test/

after delete this folder from your local `/libs/struct/` folder
