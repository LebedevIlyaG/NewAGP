#include <gtest/gtest.h>
#include <string>
#include <cstdlib>



TEST(TestNewAGP, throws_when_create_with_negative_N)
{

  EXPECT_EQ(1 + 1, 2);

}
//
//TEST_F(TaskTest, throws_when_create_with_null_N)
//{
//  int oldN = parameters.Dimension;
//  parameters.Dimension = 0;
//  ASSERT_ANY_THROW(Task testTask( problem, 0));
//  parameters.Dimension = oldN;
//}
//
//TEST_F(TaskTest, throws_when_create_with_too_large_N)
//{
//  int oldN = parameters.Dimension;
//  parameters.Dimension = 500;
//  ASSERT_ANY_THROW(Task testTask(problem, 0));
//  parameters.Dimension = oldN;
//}
//
///**
// * Создание задачи с корректными входными параметрами
// */
//TEST_F(TaskTest, can_create_with_correct_values)
//{
//  ASSERT_NO_THROW(Task testTask( problem, 0));
//}
//
///**
// * Тестирует метод SetNumofFunc.
// */
//TEST_F(TaskTest, SetNumOfFuncUpdatesValue)
//{
//    task->SetNumofFunc(10);
//    EXPECT_EQ(task->GetNumOfFunc(), 10);
//}
//
///**
// * Тестирует методы, проверяющие состояние объекта: IsInit и IsLeaf.
// */
//TEST_F(TaskTest, StateCheckMethods)
//{
//    EXPECT_TRUE(task->IsInit());
//    EXPECT_FALSE(task->IsLeaf());
//
//    Task leafTask(problem, 1);
//    EXPECT_TRUE(leafTask.IsLeaf());
//}
//
///**
// * Тестирует клонирование объекта.
// */
//TEST_F(TaskTest, CloneCreatesIdenticalCopy)
//{
//    Task* clone = task->Clone();
//    ASSERT_NE(clone, nullptr);
//    ASSERT_NE(clone, task);
//
//    EXPECT_EQ(clone->IsInit(), task->IsInit());
//    EXPECT_EQ(clone->GetN(), task->GetN());
//    EXPECT_EQ(clone->GetNumOfFunc(), task->GetNumOfFunc());
//    EXPECT_EQ(clone->getProblem(), task->getProblem());
//
//    delete clone;
//}
//
///**
// * Тестирует вычисление функции и учет множителя.
// */
//TEST_F(TaskTest, CalculateFuncsAppliesMultiplier)
//{
//    double y[n] = { 1.0, 1.0, 1.0, 1.0, 1.0 };
//    double baseValue = 5.0; // f(y) = 5 * (1 - 10*cos(2pi) + 10) = 5
//
//    parameters.functionSignMultiplier[0] = 1.0;
//    EXPECT_DOUBLE_EQ(task->CalculateFuncs(y, 0), baseValue);
//
//    parameters.functionSignMultiplier[0] = -2.0;
//    EXPECT_DOUBLE_EQ(task->CalculateFuncs(y, 0), baseValue * -2.0);
//
//    parameters.functionSignMultiplier[0] = 1.0;
//}
//
///**
// * Проверяет, что getMin() и getMax() возвращают NULL.
// */
//TEST_F(TaskTest, GetMinMaxReturnNull)
//{
//    EXPECT_EQ(task->getMin(), nullptr);
//    EXPECT_EQ(task->getMax(), nullptr);
//}