#include "CategorizationFileInfo.h"

CategorizationFileInfo::CategorizationFileInfo(wxString& strPath):
        m_pFileName( 0 ),
        m_bPreProcessed( false ),
        m_bProcessed(false)
{
    //ctor
    m_pFileName = new wxFileName(strPath);
}

CategorizationFileInfo::~CategorizationFileInfo()
{
    //dtor
    if (m_pFileName)
    {
        delete m_pFileName;
        m_pFileName = 0;
    }
}
