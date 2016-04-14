/* 	File: main.cpp 	
*	This file is part of the program rtplot
*  	Program description : rtplot takes commands from stdin to display graphs. See the readme for usage
*  	Copyright (C) 2015 -  Benjamin Navarro (LIRMM). All Right reserved.
*
*	This software is free software: you can redistribute it and/or modify
*	it under the terms of the CeCILL-C license as published by
*	the CEA CNRS INRIA, either version 1 
*	of the License, or (at your option) any later version.
*	This software is distributed in the hope that it will be useful,
*	but WITHOUT ANY WARRANTY without even the implied warranty of
*	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
*	CeCILL-C License for more details.
*
*	You should have received a copy of the CeCILL-C License
*	along with this software. If not, it can be found on the official website 
*	of the CeCILL licenses family (http://www.cecill.info/index.en.html).
*/
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
