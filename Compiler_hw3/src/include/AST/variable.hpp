#pragma once
#include <string>
#include <vector>
#include "AST/ast.hpp"
#include "constantvalue.hpp"
#include "arrtype.hpp"

class ASTNodeVisitorBase;

class VariableNode : public ASTNodeBase
{
public:
  std::string name;
  std::string type;
  ConstantValueNode* constantValueNode;
  ArrTypeNode* arrTypeNode;

  VariableNode(uint32_t line, uint32_t col);
  void printNode();
  ~VariableNode();
  void accept(ASTNodeVisitorBase &v);
};