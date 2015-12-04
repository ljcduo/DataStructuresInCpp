/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> static void exchangeChildren(BinNodePosi(T) v) //左右孩子对换
{ BinNodePosi(T) t =  v->lChild; v->lChild = v->rChild; v->rChild = t; }

// 合并以a和b为根节点的两个左式堆，其中前者优先级更高
template <typename T> static BinNodePosi(T) merge1(BinNodePosi(T) a, BinNodePosi(T) b) {
   if (!HasLChild(*a)) { //a没有左孩子
      a->lChild = b; b->parent = a; //直接将b作为a的左孩子
   } else { //否则
      a->rChild = merge(a->rChild, b); //将b与a的右子堆合并
      a->rChild->parent = a; //并更新父子关系
      if (a->lChild->npl < a->rChild->npl) //合并后，若a左子堆的npl更小，则
         exchangeChildren(a); //交换a的左、右子堆——如此可保证右子堆的npl更小
      a->npl = a->rChild->npl + 1; //更新a的npl
   }
   return a; //返回合并后的堆顶
}

// 根据相对优先级确定适宜的方式，合并以a和b为根节点的两个左式堆
template <typename T> static BinNodePosi(T) merge(BinNodePosi(T) a, BinNodePosi(T) b) {
   if (!a) return b; //退化情况
   if (!b) return a; //退化情况
   return //一般情况
      lt(a->data, b->data) ? //根据待合并子堆的相对优先级，确定合并次序
         merge1(b, a) : //b优先级更高时
         merge1(a, b) ; //a优先级不低时
} //算法只负责结构合并，堆的规模须由上层调用者负责做相应的更新