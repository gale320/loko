#include "cv2qt.h"

namespace loko{

using namespace cv;
//copy data
QImage cvMat2QImage(const cv::Mat& mat) 
{
    if (mat.empty())
    {
        return QImage();
    }
    QImage image;
    switch (mat.type())
    {
    case CV_8UC1:
    {
        image = QImage((const uchar*)(mat.data),
            mat.cols, mat.rows, mat.step,
            QImage::Format_Grayscale8);
        return image.copy();
    }
    case CV_8UC2:
    {
        mat.convertTo(mat, CV_8UC1);
        image = QImage((const uchar*)(mat.data),
            mat.cols, mat.rows, mat.step,
            QImage::Format_Grayscale8);
        return image.copy();
    }
    case CV_8UC3:
    {
        // Copy input Mat
        const uchar *pSrc = (const uchar*)mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
        return image.rgbSwapped();
    }
    case CV_8UC4:
    {
        // Copy input Mat
        const uchar *pSrc = (const uchar*)mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
        return image.copy();
    }
    case CV_32FC1:
    {
        cv::Mat normalize_mat;
        normalize(mat, normalize_mat, 0, 255, NORM_MINMAX, -1);
        normalize_mat.convertTo(normalize_mat, CV_8U);
        const uchar *pSrc = (const uchar*)normalize_mat.data;
        QImage image(pSrc, normalize_mat.cols, normalize_mat.rows, normalize_mat.step, QImage::Format_Grayscale8);
        return image.copy();
    }
    case CV_32FC3:
    {
        cv::Mat normalize_mat;
        normalize(mat, normalize_mat, 0, 255, NORM_MINMAX,-1);
        normalize_mat.convertTo(normalize_mat, CV_8U);
        const uchar *pSrc = (const uchar*)normalize_mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, normalize_mat.cols, normalize_mat.rows, normalize_mat.step, QImage::Format_RGB888);
        return image.rgbSwapped();
    }
    case CV_64FC1:
    {
        cv::Mat normalize_mat;
        normalize(mat, normalize_mat, 0, 255, NORM_MINMAX, -1);
        normalize_mat.convertTo(normalize_mat, CV_8U);
        const uchar *pSrc = (const uchar*)normalize_mat.data;
        QImage image(pSrc, normalize_mat.cols, normalize_mat.rows, normalize_mat.step, QImage::Format_Grayscale8);
        return image.copy();
    }
    case CV_64FC3:
    {
        cv::Mat normalize_mat;
        normalize(mat, normalize_mat, 0, 255, NORM_MINMAX, -1);
        normalize_mat.convertTo(normalize_mat, CV_8U);
        const uchar *pSrc = (const uchar*)normalize_mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, normalize_mat.cols, normalize_mat.rows, normalize_mat.step, QImage::Format_RGB888);
        return image.rgbSwapped();
    }
    case CV_32SC1:
    {
        cv::Mat normalize_mat;
        normalize(mat, normalize_mat, 0, 255, NORM_MINMAX, -1);
        normalize_mat.convertTo(normalize_mat, CV_8U);
        const uchar *pSrc = (const uchar*)normalize_mat.data;
        QImage image(pSrc, normalize_mat.cols, normalize_mat.rows, normalize_mat.step, QImage::Format_Grayscale8);
        return image.copy();
    }
    case CV_32SC3:
    {
        cv::Mat normalize_mat;
        normalize(mat, normalize_mat, 0, 255, NORM_MINMAX, -1);
        normalize_mat.convertTo(normalize_mat, CV_8U);
        const uchar *pSrc = (const uchar*)normalize_mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, normalize_mat.cols, normalize_mat.rows, normalize_mat.step, QImage::Format_RGB888);
        return image.rgbSwapped();
    }
    case CV_16SC1:
    {
        cv::Mat normalize_mat;
        normalize(mat, normalize_mat, 0, 255, NORM_MINMAX, -1);
        normalize_mat.convertTo(normalize_mat, CV_8U);
        const uchar *pSrc = (const uchar*)normalize_mat.data;
        QImage image(pSrc, normalize_mat.cols, normalize_mat.rows, normalize_mat.step, QImage::Format_Grayscale8);
        return image.copy();
    }
    case CV_16SC3:
    {
        cv::Mat normalize_mat;
        normalize(mat, normalize_mat, 0, 255, NORM_MINMAX, -1);
        normalize_mat.convertTo(normalize_mat, CV_8U);
        const uchar *pSrc = (const uchar*)normalize_mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, normalize_mat.cols, normalize_mat.rows, normalize_mat.step, QImage::Format_RGB888);
        return image.rgbSwapped();
    }
    case CV_8SC1:
    {
        //Mat normalize_mat;
        //normalize(mat, normalize_mat, 0, 255, NORM_MINMAX, -1);
        mat.convertTo(mat, CV_8U);
        const uchar *pSrc = (const uchar*)mat.data;
        QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_Grayscale8);
        return image.copy();
    }
    case CV_8SC3:
    {
        mat.convertTo(mat, CV_8U);
        const uchar *pSrc = (const uchar*)mat.data;
        QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
        return image.rgbSwapped();
    }
    default:
        mat.convertTo(mat, CV_8UC3);
        QImage image((const uchar*)mat.data, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
        return image.rgbSwapped();
        return QImage();
        break;
    }
}


//shared memeory
cv::Mat QImage2cvMat(QImage& image)
{
    cv::Mat mat;
    //qDebug() << image.format();
    switch (image.format())
    {
    case QImage::Format_ARGB32:
        mat = cv::Mat(image.height(), image.width(), CV_8UC4, (void*)image.constBits(), image.bytesPerLine());
        break;
    case QImage::Format_RGB32:
        mat = cv::Mat(image.height(), image.width(), CV_8UC3, (void*)image.constBits(), image.bytesPerLine());
        //cv::cvtColor(mat, mat, CV_BGR2RGB);
        break;
    case QImage::Format_ARGB32_Premultiplied:
        mat = cv::Mat(image.height(), image.width(), CV_8UC4, (void*)image.constBits(), image.bytesPerLine());
        break;
    case QImage::Format_RGB888:
        mat = cv::Mat(image.height(), image.width(), CV_8UC3, (void*)image.constBits(), image.bytesPerLine());
        //cv::cvtColor(mat, mat, CV_BGR2RGB);
        break;
    case QImage::Format_Indexed8:
        mat = cv::Mat(image.height(), image.width(), CV_8UC1, (void*)image.constBits(), image.bytesPerLine());
        break;
    case QImage::Format_Grayscale8:
        mat = cv::Mat(image.height(), image.width(), CV_8UC1, (void*)image.constBits(), image.bytesPerLine());
        break;
    }
    return mat;
}

}
