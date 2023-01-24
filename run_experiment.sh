echo "Running Experiment\n"

rm -rf ./results
mkdir ./results
idf.py fullclean
C_VERSION=1 idf.py build
cp ./build/c_versus_cpp.map ./results/c.map
idf.py size-components >> ./results/c_size.txt
idf.py fullclean
CPP_VERSION=1 idf.py build
cp ./build/c_versus_cpp.map ./results/cpp.map
idf.py size-components >> ./results/cpp_size.txt
idf_size.py --diff ./results/c.map ./results/cpp.map >> ./results/diff.txt