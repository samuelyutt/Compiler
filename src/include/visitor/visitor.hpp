#pragma once
#include "AST/ast.hpp"
#include "AST/program.hpp"
#include "AST/declaration.hpp"
#include "AST/constantvalue.hpp"
#include "AST/variable.hpp"
#include "AST/programbody.hpp"
#include "AST/expression.hpp"
#include "AST/variablereference.hpp"
#include "AST/binaryoperator.hpp"
#include "AST/unaryoperator.hpp"
#include "AST/functioncallexpr.hpp"
#include "AST/statement.hpp"
#include "AST/compoundstmt.hpp"
#include "AST/arrtype.hpp"
#include "AST/arrdeclaration.hpp"

class ASTNodeVisitorBase
{
public:
    virtual void visit(ProgramNode *e) = 0;
    virtual void visit(DeclarationNode *e) = 0;
    virtual void visit(ConstantValueNode *e) = 0;
    virtual void visit(VariableNode *e) = 0;
    virtual void visit(ProgramBodyNode *e) = 0;
    virtual void visit(ExpressionNode *e) = 0;
    virtual void visit(VariableReferenceNode *e) = 0;
    virtual void visit(BinaryOperatorNode *e) = 0;
    virtual void visit(UnaryOperatorNode *e) = 0;
    virtual void visit(FunctionCallExprNode *e) = 0;
    virtual void visit(StatementNode *e) = 0;
    virtual void visit(CompoundStmtNode *e) = 0;
    virtual void visit(ArrTypeNode *e) = 0;
    virtual void visit(ArrDeclarationNode *e) = 0;
};