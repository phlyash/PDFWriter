cmake_minimum_required(VERSION 3.27)
project(PDFWriter)

set(CMAKE_CXX_STANDARD 23)

add_executable(PDFWriter main.cpp
        Document.cpp
        Document.h
        document_objects/Header.cpp
        document_objects/Header.h
        document_objects/Body.cpp
        document_objects/Body.h
        document_objects/Trailer.cpp
        document_objects/Trailer.h
        document_objects/Xref.cpp
        document_objects/Xref.h
        pdf_objects/Object.h
        pdf_objects/LiteralString.cpp
        pdf_objects/LiteralString.h
        pdf_objects/HexString.cpp
        pdf_objects/HexString.h
        token.cpp
        pdf_objects/Name.cpp
        pdf_objects/Name.h
        pdf_objects/Dictionary.cpp
        pdf_objects/Dictionary.h
)
