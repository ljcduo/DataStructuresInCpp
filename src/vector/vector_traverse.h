/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> void Vector<T>::traverse(void (*visit)(T &)) //利用函数指针机制的遍历
{ for (int i = 0; i < _size; i++) visit(_elem[i]); }

template <typename T> template <typename VST> //元素类型、操作器
void Vector<T>::traverse(VST & visit) //利用函数对象机制的遍历
{ for (int i = 0; i < _size; i++) visit(_elem[i]); }
