# CMakeList.txt : calc_led の CMake プロジェクト。ソースを含めて、次を定義します:
# プロジェクト専用ロジックはこちらです。
#
cmake_minimum_required (VERSION 3.8)

project ("calc_led")

# ソースをこのプロジェクトの実行可能ファイルに追加します。
add_executable (calc_led "calc_led.cpp" "calc_led.h")

# TODO: テストを追加し、必要な場合は、ターゲットをインストールします。
